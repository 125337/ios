@interface WCVideoProducerBaseSheetViewConfig : NSObject
{
    BOOL _isTopViewEnabled; // +0x8
    BOOL _isBottomViewEnabled; // +0x9
    double _topViewHeight; // +0x10
    NSString * _topViewTitle; // +0x18
    double _bottomViewHeight; // +0x20
}
+ (id)defaultConfig;
- (BOOL)isTopViewEnabled;
- (void)setIsTopViewEnabled:(BOOL)arg1;
- (double)topViewHeight;
- (void)setTopViewHeight:(double)arg1;
- (id)topViewTitle;
- (void)setTopViewTitle:(id)arg1;
- (BOOL)isBottomViewEnabled;
- (void)setIsBottomViewEnabled:(BOOL)arg1;
- (double)bottomViewHeight;
- (void)setBottomViewHeight:(double)arg1;
- (void).cxx_destruct;
@end

