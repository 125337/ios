@interface WCPayTransferPhoneProtocaDetailView : UIView <ILinkEventExt>
{
    WCPayTransferPhoneProtocalHalfPage * _parentVC; // +0x8
    RichTextView * _protoLink; // +0x10
    UILabel * _titleLabel; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)titleLabel;
- (id)protoLink;
- (id)parentVC;
- (void)setParentVC:(id)arg1;
- (void)setProtoLink:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

