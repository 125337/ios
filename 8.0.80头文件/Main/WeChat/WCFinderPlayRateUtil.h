@interface WCFinderPlayRateUtil : NSObject
+ (id)getPlayBackSpeedViewTipsWithRate:(long long)arg1;
+ (id)getPlayRateCompleteToastTipsWithRate:(long long)arg1 isTouch:(BOOL)arg2;
+ (double)getTipsPlayRateWithContentVM:(id)arg1;
+ (void)showPlayRateResultWithRate:(double)arg1 isTouch:(BOOL)arg2 playbackSpeedView:(id)arg3 willShowBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
@end
