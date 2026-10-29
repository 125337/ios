@interface ScanGoodsImageInfo : NSObject
{
    BOOL _isAiCrop; // +0x8
    BOOL _isUseAi; // +0x9
    BOOL _forceJump; // +0xa
    BOOL _needLocation; // +0xb
    unsigned int _frameID; // +0xc
    unsigned int _cameraImgW; // +0x10
    unsigned int _cameraImgH; // +0x14
    unsigned int _jumpType; // +0x18
    unsigned int _eventID; // +0x1c
    long long _imageSource; // +0x20
    long long _businessType; // +0x28
    long long _businessSubType; // +0x30
    long long _onlyAcceptResultAction; // +0x38
    NSData * _imageData; // +0x40
    unsigned long long _sessionID; // +0x48
    GoodsObject * _cropObj; // +0x50
    CameraScanGoodsAdInfo * _adInfo; // +0x58
    CameraScanGoodsSearchInfo * _searchInfo; // +0x60
    CameraScanGoodsJSAPIInfo * _jsapiInfo; // +0x68
    CLLocation * _location; // +0x70
    NSString * _reuploadFilePath; // +0x78
    NSMutableArray * _imageInfoList; // +0x80
    GoodsObject * _matchObj; // +0x88
    NSString * _reqKey; // +0x90
    long long _respResultAction; // +0x98
    NSString * _jumpKeyword; // +0xa0
    NSData * _respBizBuffer; // +0xa8
    NSString * _messageUUID; // +0xb0
    UIImage * _albumImage; // +0xb8
}
- (unsigned int)getSvrMode;
- (long long)imageSource;
- (void)setImageSource:(long long)arg1;
- (long long)businessType;
- (void)setBusinessType:(long long)arg1;
- (long long)businessSubType;
- (void)setBusinessSubType:(long long)arg1;
- (long long)onlyAcceptResultAction;
- (void)setOnlyAcceptResultAction:(long long)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (unsigned long long)sessionID;
- (void)setSessionID:(unsigned long long)arg1;
- (unsigned int)frameID;
- (void)setFrameID:(unsigned int)arg1;
- (BOOL)isAiCrop;
- (void)setIsAiCrop:(BOOL)arg1;
- (BOOL)isUseAi;
- (void)setIsUseAi:(BOOL)arg1;
- (id)cropObj;
- (void)setCropObj:(id)arg1;
- (unsigned int)cameraImgW;
- (void)setCameraImgW:(unsigned int)arg1;
- (unsigned int)cameraImgH;
- (void)setCameraImgH:(unsigned int)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)searchInfo;
- (void)setSearchInfo:(id)arg1;
- (id)jsapiInfo;
- (void)setJsapiInfo:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)reuploadFilePath;
- (void)setReuploadFilePath:(id)arg1;
- (id)imageInfoList;
- (void)setImageInfoList:(id)arg1;
- (BOOL)forceJump;
- (void)setForceJump:(BOOL)arg1;
- (id)matchObj;
- (void)setMatchObj:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (long long)respResultAction;
- (void)setRespResultAction:(long long)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)jumpKeyword;
- (void)setJumpKeyword:(id)arg1;
- (BOOL)needLocation;
- (void)setNeedLocation:(BOOL)arg1;
- (id)respBizBuffer;
- (void)setRespBizBuffer:(id)arg1;
- (id)messageUUID;
- (void)setMessageUUID:(id)arg1;
- (id)albumImage;
- (void)setAlbumImage:(id)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

