@interface WeDropReceiveQRFinishView : UIView <WeDropReceiveModuleView>
{
    NSString * _qrContent; // +0x8
    UILabel * _tipsLabel; // +0x10
    UIView * _qrContianerView; // +0x18
    UIImageView * _qrView; // +0x20
}
+ (double)expectingHeight:(double)arg1;
- (id)initWithQRContent:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)qrContent;
- (void)setQrContent:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)qrContianerView;
- (void)setQrContianerView:(id)arg1;
- (id)qrView;
- (void)setQrView:(id)arg1;
- (void).cxx_destruct;
@end
