@interface WAMediaCastingUpnpCommandService : NSObject
+ (void)playWithDevice:(id)arg1 startPosition:(double)arg2 uri:(id)arg3 completion:(id /* block */)arg4;
+ (void)playWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)stopWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)pauseWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)setVolumeWithDevice:(id)arg1 volume:(double)arg2 completion:(id /* block */)arg3;
+ (void)seekWithDevice:(id)arg1 position:(double)arg2 completion:(id /* block */)arg3;
+ (void)getVolumeWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)getPositionInfoWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)getMediaInfoWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)getTransportInfoWithDevice:(id)arg1 completion:(id /* block */)arg2;
+ (void)logErrorIfNeeded:(id)arg1 prefix:(id)arg2;
+ (double)toTimeInterval:(id)arg1;
@end
