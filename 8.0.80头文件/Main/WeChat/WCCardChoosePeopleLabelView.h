@interface WCCardChoosePeopleLabelView : MMUIView
{
    NSString * _mainWording; // +0x8
    NSString * _mainText; // +0x10
    NSString * _subText; // +0x18
    MMUIButton * _settingButton; // +0x20
    MMUIImageView * _peopleImageView; // +0x28
    WCCardChooseSubPeopleLabelView * _subPeopleView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)peopleImageView;
- (id)subPeopleView;
- (id)settingButton;
- (void)setMainText:(id)arg1;
- (void)setSubText:(id)arg1;
- (id)mainWording;
- (void)setMainWording:(id)arg1;
- (id)mainText;
- (id)subText;
- (void)setSettingButton:(id)arg1;
- (void)setPeopleImageView:(id)arg1;
- (void)setSubPeopleView:(id)arg1;
- (void).cxx_destruct;
@end
