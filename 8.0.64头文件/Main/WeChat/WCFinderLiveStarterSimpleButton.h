@interface WCFinderLiveStarterSimpleButton : MMUIButton
{
    BOOL _isSimpleVersion; // +0x8
    MMUILabel * _contentLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)updateWithSimpleVersion:(BOOL)arg1;
- (BOOL)isSimpleVersion;
- (void)setIsSimpleVersion:(BOOL)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
