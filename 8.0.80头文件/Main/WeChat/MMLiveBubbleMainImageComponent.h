@interface MMLiveBubbleMainImageComponent : UIView <MMLiveBubbleComponent>
{
    MMWebImageView * _imageView; // +0x8
    UIView * _serialContainer; // +0x10
    MMUILabel * _serialLabel; // +0x18
    MMLiveBubbleMainImageComponentInfo * _info; // +0x20
    NSString * _infoRawJSON; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithJSONString:(id)arg1;
- (void)applyInfo;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)serialContainer;
- (void)setSerialContainer:(id)arg1;
- (id)serialLabel;
- (void)setSerialLabel:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (void).cxx_destruct;
@end
