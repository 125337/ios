@interface MMFinderLiveResDownloadManagerUtilities : NSObject
+ (void)validateFileAtPathWithComputedDigest:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)computeAndSaveDigestForFileAtPath:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)extractExtraDataAtPath:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)saveExtraData:(id)arg1 forFileAtPath:(id)arg2 completionBlock:(id /* block */)arg3;
@end

