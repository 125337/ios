@interface CBTCoopV2EmoticonViewModel : CBTCoopV2AsstBoardViewModel <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _isEmoticonCategory; // +0x8
    BOOL _hasRegisteredDownloadExt; // +0x9
    unsigned int _emojiType; // +0xc
    unsigned int _weappVersion; // +0x10
    NSString * _imageURL; // +0x18
    NSString * _sourceTitle; // +0x20
    NSString * _docid; // +0x28
    NSString * _express; // +0x30
    NSString * _articleSourceUrl; // +0x38
    double _originWidth; // +0x40
    double _originHeight; // +0x48
    NSString * _jsapiName; // +0x50
    NSString * _jsapiParamRaw; // +0x58
    NSString * _bizUin; // +0x60
    NSString * _encryptUrl; // +0x68
    NSString * _md5; // +0x70
    NSString * _aesKey; // +0x78
    NSString * _thumbUrl; // +0x80
    NSString * _designerId; // +0x88
    NSString * _designerName; // +0x90
    NSString * _productID; // +0x98
    NSString * _productUrl; // +0xa0
    NSString * _productName; // +0xa8
    NSString * _weappUserName; // +0xb0
    unsigned long long _storeState; // +0xb8
    NSString * _storeImagePath; // +0xc0
    id <CBTCoopV2EmoticonStoreImageDelegate> _storeImageDelegate; // +0xc8
}
+ (XmlReaderNode_t *)findMsgNodeFromRoot:(XmlReaderNode_t *)arg1;
+ (XmlReaderNode_t *)findRealXmlNodeFromMsg:(XmlReaderNode_t *)arg1;
+ (id)stringValueForChild:(const char *)arg1 node:(XmlReaderNode_t *)arg2 defaultValue:(id)arg3;
+ (id)stringFromParams:(id)arg1 key:(id)arg2;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (BOOL)canRenderEmoticonCard;
- (id)copyableText;
- (BOOL)isStoreEmoticon;
- (CGSize)displaySize;
- (CGSize)horizontalDisplaySize;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardDescription;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (void)ensureStoreImageDownload;
- (void)retryStoreImageDownload;
- (void)notifyStoreStateChanged;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imagePath:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)openEmotionPageFromViewController:(id)arg1;
- (void)updateFromXML:(id)arg1;
- (void)parseJsapiParam:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)sourceTitle;
- (void)setSourceTitle:(id)arg1;
- (id)docid;
- (void)setDocid:(id)arg1;
- (id)express;
- (void)setExpress:(id)arg1;
- (id)articleSourceUrl;
- (void)setArticleSourceUrl:(id)arg1;
- (double)originWidth;
- (void)setOriginWidth:(double)arg1;
- (double)originHeight;
- (void)setOriginHeight:(double)arg1;
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)jsapiParamRaw;
- (void)setJsapiParamRaw:(id)arg1;
- (unsigned int)emojiType;
- (void)setEmojiType:(unsigned int)arg1;
- (id)bizUin;
- (void)setBizUin:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (id)designerName;
- (void)setDesignerName:(id)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)productUrl;
- (void)setProductUrl:(id)arg1;
- (id)productName;
- (void)setProductName:(id)arg1;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (unsigned long long)storeState;
- (void)setStoreState:(unsigned long long)arg1;
- (id)storeImagePath;
- (void)setStoreImagePath:(id)arg1;
- (id)storeImageDelegate;
- (void)setStoreImageDelegate:(id)arg1;
- (BOOL)isEmoticonCategory;
- (void)setIsEmoticonCategory:(BOOL)arg1;
- (BOOL)hasRegisteredDownloadExt;
- (void)setHasRegisteredDownloadExt:(BOOL)arg1;
- (void).cxx_destruct;
@end
