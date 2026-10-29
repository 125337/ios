@interface WCContentMicroMerchantItemView : WCContentItemBaseView
{
    WCDataItem * _dataItem; // +0x38
    WCMicroMerchantFeedsGroup * _wsGroup; // +0x40
    RichTextView * _leftTitle; // +0x48
    MMUILabel * _rightTitle; // +0x50
}
+ (double)heightForDataItem:(id)arg1;
- (id)rightTitle;
- (id)leftTitle;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)throwUrlMessage;
- (void)onVoiceOverClick;
- (void)openMicroMerchantSubTimeline;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)wsGroup;
- (void)setWsGroup:(id)arg1;
- (void)setLeftTitle:(id)arg1;
- (void)setRightTitle:(id)arg1;
- (void).cxx_destruct;
@end

