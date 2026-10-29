@interface TXYCircleBgView : TXYFLCircleProgressView
{
    UIColor * track_normal; // +0x78
    UIColor * track_error; // +0x80
    UIColor * track_sucess; // +0x88
    UIColor * process_normal; // +0x90
    UIColor * process_error; // +0x98
    UIColor * process_sucess; // +0xa0
    UIColor * text_normal; // +0xa8
    UIColor * text_error; // +0xb0
    UIColor * text_sucess; // +0xb8
}
+ (id)defaultCircle;
- (void)setColorWithType:(long long)arg1 color:(id)arg2 state:(long long)arg3;
- (void)startLoadingWith:(long long)arg1;
- (void)changeTo:(long long)arg1;
- (id)getTrackColor:(long long)arg1;
- (void)stopLoadingAndReset;
- (void).cxx_destruct;
@end
