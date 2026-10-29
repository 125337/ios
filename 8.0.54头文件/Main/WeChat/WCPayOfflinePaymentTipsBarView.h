@interface WCPayOfflinePaymentTipsBarView : UIView
{
    UIImageView * _iconImgView; // +0x8
    MMUILabel * _tipsLabel; // +0x10
    NSString * _tipsContent; // +0x18
}
- (id)initWithContainerWidth:(double)arg1 tips:(id)arg2;
- (void)setupContentView;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)tipsContent;
- (void)setTipsContent:(id)arg1;
- (void).cxx_destruct;
@end

