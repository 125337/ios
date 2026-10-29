@interface MMVideoCompressHelper : MMObject
+ (id)getCacheFilePathFrom:(id)arg1;
+ (id)getOutputFilePathFrom:(id)arg1;
+ (void)exportVideoFromUrl:(id)arg1 toOutputUrl:(id)arg2 shouldScaleDuration:(BOOL)arg3 withBlock:(id /* block */)arg4;
@end

