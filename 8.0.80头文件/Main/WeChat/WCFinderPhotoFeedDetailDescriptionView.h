@interface WCFinderPhotoFeedDetailDescriptionView : UIView <WCFinderFeedContentTextClickActionDelegate>
{
    id <WCFinderFeedDescriptionViewDelegate> _delegate; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    WCFinderFeedContentTouchExpandTextView * _textView; // +0x18
    WCFinderMaskButton * _eventButton; // +0x20
    WCFinderMaskButton * _poiButton; // +0x28
    WCFinderMaskButton * _redPacketLinkButton; // +0x30
    WCFinderMaskButton * _collectionButton; // +0x38
    UILabel * _ipRegionAndPostTimeLabel; // +0x40
    CGPoint _hitPoint; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutView;
- (void)updateWithContentVM:(id)arg1;
- (void)resetTrucation;
- (BOOL)hasRedPacketLink;
- (void)clickPOIAction:(id)arg1;
- (void)clickEventAction:(id)arg1;
- (void)clickLinkAction:(id)arg1;
- (void)clickCollectionAction:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(CGRect)arg3;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText:(id)arg1;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)eventButton;
- (void)setEventButton:(id)arg1;
- (id)poiButton;
- (void)setPoiButton:(id)arg1;
- (id)redPacketLinkButton;
- (void)setRedPacketLinkButton:(id)arg1;
- (CGPoint)hitPoint;
- (void)setHitPoint:(CGPoint)arg1;
- (id)collectionButton;
- (void)setCollectionButton:(id)arg1;
- (id)ipRegionAndPostTimeLabel;
- (void)setIpRegionAndPostTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end
