@interface CBTCoopV2ProductDetailViewModel : CBTCoopV2AsstBoardViewModel
{
    BOOL _isProductDetailCategory; // +0x8
    BOOL _didTriggerExposurePreload; // +0x9
    unsigned int _sellingPrice; // +0xc
    CBTCoopV2ProductDetailCellView * _cellView; // +0x10
    NSString * _productId; // +0x18
    NSString * _bottomTag; // +0x20
    NSString * _thumbUrl; // +0x28
    NSString * _productTitle; // +0x30
    NSString * _priceText; // +0x38
    NSString * _jsapiName; // +0x40
    NSString * _jsapiParam; // +0x48
}
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)parseProductDetailXML;
- (id)getNodeText:(XmlReaderNode_t *)arg1 tag:(const char *)arg2;
- (id)formatPrice:(unsigned int)arg1;
- (id)getCellReuseId;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)titleText;
- (id)subtitleText;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coverImageURL;
- (void)tryStartExposurePreload;
- (void)openProductDetailFromViewController:(id)arg1;
- (id)extractEcsJumpInfoBase64;
- (void)logEcsJumpInfoProto:(id)arg1;
- (id)currentVisibleNavigationController;
- (void)onClickAction;
- (BOOL)canRenderProductDetailCard;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)bottomTag;
- (void)setBottomTag:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)productTitle;
- (void)setProductTitle:(id)arg1;
- (unsigned int)sellingPrice;
- (void)setSellingPrice:(unsigned int)arg1;
- (id)priceText;
- (void)setPriceText:(id)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParam;
- (void)setJsapiParam:(id)arg1;
- (BOOL)isProductDetailCategory;
- (void)setIsProductDetailCategory:(BOOL)arg1;
- (BOOL)didTriggerExposurePreload;
- (void)setDidTriggerExposurePreload:(BOOL)arg1;
- (void).cxx_destruct;
@end
