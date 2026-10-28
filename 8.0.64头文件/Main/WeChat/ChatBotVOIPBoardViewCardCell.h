@interface ChatBotVOIPBoardViewCardCell : ChatBotVOIPBoardViewBaseCell <IMsgExt>
{
    NSString * _title; // +0x8
    NSString * _subTitle; // +0x10
    NSString * _fromTitle; // +0x18
    NSString * _fromImageName; // +0x20
    UIImageView * _thumbImageView; // +0x28
}
- (id)initWithMessage:(id)arg1;
- (double)setupViewWithWidth:(double)arg1;
- (id)createCardView;
- (void)changeImageViewContent;
- (void)onTapAction;
- (id)formMsgStyleContentView:(id)arg1 previewSel:(SEL)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)fromTitle;
- (void)setFromTitle:(id)arg1;
- (id)fromImageName;
- (void)setFromImageName:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (void).cxx_destruct;
@end
