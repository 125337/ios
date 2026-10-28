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
    unsigned int _categoryId; // +0x1c
    unsigned int _eventID; // +0x20
    long long _imageSource; // +0x28
    long long _businessType; // +0x30
    long long _businessSubType; // +0x38
    long long _onlyAcceptResultAction; // +0x40
    NSData * _imageData; // +0x48
    unsigned long long _sessionID; // +0x50
    GoodsObject * _cropObj; // +0x58
    CameraScanGoodsAdInfo * _adInfo; // +0x60
    CameraScanGoodsSearchInfo * _searchInfo; // +0x68
    CameraScanGoodsJSAPIInfo * _jsapiInfo; // +0x70
    CLLocation * _location; // +0x78
    NSString * _reuploadFilePath; // +0x80
    NSMutableArray * _imageInfoList; // +0x88
    GoodsObject * _matchObj; // +0x90
    NSString * _reqKey; // +0x98
    long long _respResultAction; // +0xa0
    NSString * _jumpKeyword; // +0xa8
    NSData * _respBizBuffer; // +0xb0
    NSString * _messageUUID; // +0xb8
    NSString * _action; // +0xc0
    NSString * _title; // +0xc8
    UIImage * _albumImage; // +0xd0
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
- (id)action;
- (void)setAction:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)categoryId;
- (void)setCategoryId:(unsigned int)arg1;
- (id)albumImage;
- (void)setAlbumImage:(id)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (void).cxx_destruct;
@end
