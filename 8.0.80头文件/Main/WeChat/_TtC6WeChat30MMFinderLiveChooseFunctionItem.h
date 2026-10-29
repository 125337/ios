@interface _TtC6WeChat30MMFinderLiveChooseFunctionItem : NSObject
{
    long long type; // +0x8
    NSString * detailStr; // +0x10
    UIColor * detailStrColor; // +0x18
    NSString * titleStr; // +0x20
    MMFinderLivePromoteInfoAvailableItem * item; // +0x28
    UIImage * functionImg; // +0x30
    BOOL enable; // +0x38
    BOOL isFirstDisable; // +0x39
    double cellHeight; // +0x40
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)detailStr;
- (void)setDetailStr:(id)arg1;
- (id)detailStrColor;
- (void)setDetailStrColor:(id)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)functionImg;
- (void)setFunctionImg:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (BOOL)isFirstDisable;
- (void)setIsFirstDisable:(BOOL)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)init;
- (void).cxx_destruct;
@end
