@interface CBTAsstBoardWeAppViewModel : CBTAsstBoardBaseViewModel
{
    CBTAsstCardWrap_CreateAIWeAppCard * _weAppModel; // +0x8
    WAAgentResult * _weAppResult; // +0x10
    WAContact * _weAppContact; // +0x18
    NSString * _title; // +0x20
    NSString * _subTitle; // +0x28
    NSString * _fromTitle; // +0x30
    NSString * _fromImageName; // +0x38
    double _width; // +0x40
}
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)getWidthScale;
- (id)createCardView;
- (id)getWeAppTagInfo;
- (void)loadWeAppContactAsync;
- (BOOL)isForwardable;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)weAppModel;
- (void)setWeAppModel:(id)arg1;
- (id)weAppResult;
- (void)setWeAppResult:(id)arg1;
- (id)weAppContact;
- (void)setWeAppContact:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)fromTitle;
- (void)setFromTitle:(id)arg1;
- (id)fromImageName;
- (void)setFromImageName:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (void).cxx_destruct;
@end
