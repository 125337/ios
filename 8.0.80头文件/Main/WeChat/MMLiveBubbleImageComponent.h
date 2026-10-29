@interface MMLiveBubbleImageComponent : UIView <MMLiveBubbleComponent>
{
    MMWebImageView * _imageView; // +0x8
    MMLiveBubbleImageComponentInfo * _info; // +0x10
    NSString * _infoRawJSON; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithJSONString:(id)arg1;
- (void)applyInfo;
- (void)layoutSubviews;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)infoRawJSON;
- (void)setInfoRawJSON:(id)arg1;
- (void).cxx_destruct;
@end
