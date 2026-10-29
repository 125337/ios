@interface WCFinderOriginalEduActionSheet : WCActionSheet <ILinkEventExt, MMCommonActionSheetPickerDelegate>
{
    BOOL _agreementSelect; // +0x8
    BOOL _isLoadingOriginal; // +0x9
    BOOL _shouldShowInterests; // +0xa
    BOOL _showRewardTips; // +0xb
    int _commentScene; // +0xc
    id <WCFinderOriginalEduActionSheetDelegate> _originalDelegate; // +0x10
    NSString * _fromFeedId; // +0x18
    unsigned long long _sourcePageType; // +0x20
    NSArray * _originalItems; // +0x28
    UIView * _tipsView; // +0x30
    MMUIButton * _agreementCheckbox; // +0x38
    MMUIButton * _acceptBtn; // +0x40
    FinderOriginalTypeItem * _selectedOriginal; // +0x48
    MMCommonActionSheetPicker * _startTimePicker; // +0x50
    unsigned long long _type; // +0x58
}
- (id)initWithShowRewardTips:(BOOL)arg1 delegate:(id)arg2;
- (id)initWithShowRewardTips:(BOOL)arg1 delegate:(id)arg2 type:(unsigned long long)arg3;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)bind25496ReportFromSetView:(id)arg1;
- (void)updateAcceptBtnBkg;
- (void)onCheckBoxClicked:(id)arg1;
- (void)onClickAcceptBtn;
- (void)onClickOriginTypeButton;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)originalDelegate;
- (void)setOriginalDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)fromFeedId;
- (void)setFromFeedId:(id)arg1;
- (unsigned long long)sourcePageType;
- (void)setSourcePageType:(unsigned long long)arg1;
- (BOOL)agreementSelect;
- (void)setAgreementSelect:(BOOL)arg1;
- (id)originalItems;
- (void)setOriginalItems:(id)arg1;
- (BOOL)isLoadingOriginal;
- (void)setIsLoadingOriginal:(BOOL)arg1;
- (BOOL)shouldShowInterests;
- (void)setShouldShowInterests:(BOOL)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (id)selectedOriginal;
- (void)setSelectedOriginal:(id)arg1;
- (id)startTimePicker;
- (void)setStartTimePicker:(id)arg1;
- (BOOL)showRewardTips;
- (void)setShowRewardTips:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

