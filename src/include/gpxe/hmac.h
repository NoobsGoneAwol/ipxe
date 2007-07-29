#ifndef _GPXE_HMAC_H
#define _GPXE_HMAC_H

/** @file
 *
 * Keyed-Hashing for Message Authentication
 */

#include <gpxe/crypto.h>

/**
 * Update HMAC
 *
 * @v digest		Digest algorithm to use
 * @v digest_ctx	Digest context
 * @v data		Data
 * @v len		Length of data
 */
static inline void hmac_update ( struct crypto_algorithm *digest,
				 void *digest_ctx, const void *data,
				 size_t len ) {
	digest_update ( digest, digest_ctx, data, len );
}

extern void hmac_init ( struct crypto_algorithm *digest, void *digest_ctx,
			void *key, size_t *key_len );
extern void hmac_final ( struct crypto_algorithm *digest, void *digest_ctx,
			 void *key, size_t *key_len, void *hmac );

#endif /* _GPXE_HMAC_H */
