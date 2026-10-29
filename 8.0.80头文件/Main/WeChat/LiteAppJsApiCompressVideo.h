@interface LiteAppJsApiCompressVideo : LiteAppJsApi
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)finishWithErrorCode:(long long)arg1 localId:(id)arg2 size:(long long)arg3;
- (id)errorMessageForCode:(long long)arg1;
- (id)compressConfigWithParam:(id)arg1;
- (double)alignedDimension:(double)arg1 scale:(double)arg2;
- (BOOL)isHDRVideoAsset:(id)arg1;
@end
