@interface MMFinderLiveBottomButtonAction : NSObject
{
    id _target; // +0x8
    MMUIButton * _button; // +0x10
    NSArray * _selectorNames; // +0x18
    WCLiveBottomTextButton * _folderFuncButton; // +0x20
}
- (id)target;
- (void)setTarget:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)selectorNames;
- (void)setSelectorNames:(id)arg1;
- (id)folderFuncButton;
- (void).cxx_destruct;
@end
