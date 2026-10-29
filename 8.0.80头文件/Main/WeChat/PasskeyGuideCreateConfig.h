@interface PasskeyGuideCreateConfig : NSObject
{
    id /* block */ _onGoToCreateBlock; // +0x8
    id /* block */ _onGoToCancelBlock; // +0x10
    id /* block */ _onLearnMoreBlock; // +0x18
    id /* block */ _onPageSheetDidClose; // +0x20
    NSString * _title; // +0x28
    NSString * _desc; // +0x30
}
- (id /* block */)onGoToCreateBlock;
- (void)setOnGoToCreateBlock:(id /* block */)arg1;
- (id /* block */)onGoToCancelBlock;
- (void)setOnGoToCancelBlock:(id /* block */)arg1;
- (id /* block */)onLearnMoreBlock;
- (void)setOnLearnMoreBlock:(id /* block */)arg1;
- (id /* block */)onPageSheetDidClose;
- (void)setOnPageSheetDidClose:(id /* block */)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
