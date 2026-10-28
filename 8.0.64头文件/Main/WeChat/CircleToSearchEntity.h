@interface CircleToSearchEntity : NSObject
{
    BOOL _skipImageUploading; // +0x8
    unsigned long long _scene; // +0x10
    unsigned long long _entrance; // +0x18
    unsigned long long _overridedSearchScene; // +0x20
    NSString * _overridedParentSearchId; // +0x28
    NSString * _sessionId; // +0x30
    UIImage * _image; // +0x38
    CMessageWrap * _messageWrap; // +0x40
    WCMediaItem * _mediaItem; // +0x48
    NSString * _imageUrl; // +0x50
    id /* block */ _presentBlock; // +0x58
    id /* block */ _dismissBlock; // +0x60
    id /* block */ _closeBlock; // +0x68
    ScanGoodsResult * _scanObjectResult; // +0x70
    CircleToSearchScanItem * _scanBarcodeResult; // +0x78
    NSString * _clickReportInfoFor33399; // +0x80
    NSMutableDictionary * _context; // +0x88
    unsigned long long _debugBeginTime; // +0x90
    NSMutableArray * _debugMessages; // +0x98
    CGRect _originFrameInWindow; // +0xa0
    CGRect _expectedFrameInWindow; // +0xc0
}
+ (unsigned long long)getSearchSceneFromScene:(unsigned long long)arg1;
+ (void)reportActionType:(unsigned long long)arg1 withScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3 andSessionId:(id)arg4 andActionValue:(id)arg5;
+ (void)reportActionType:(unsigned long long)arg1 withSearchScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3 andSessionId:(id)arg4 andActionValue:(id)arg5;
- (id)initWithImage:(id)arg1 andScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3;
- (BOOL)alignWidthToWindow;
- (BOOL)transitionFrame;
- (unsigned long long)searchScene;
- (unsigned long long)searchParentType;
- (id)searchParentSearchId;
- (id)searchExtParams;
- (id)searchThirdExtParams;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)thirdExtInfo;
- (void)setThirdExtInfo:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)report:(unsigned long long)arg1;
- (void)report:(unsigned long long)arg1 withActionValue:(id)arg2;
- (id)debugMessage;
- (void)debug:(id)arg1;
- (unsigned long long)scene;
- (unsigned long long)entrance;
- (unsigned long long)overridedSearchScene;
- (void)setOverridedSearchScene:(unsigned long long)arg1;
- (id)overridedParentSearchId;
- (void)setOverridedParentSearchId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)image;
- (CGRect)originFrameInWindow;
- (void)setOriginFrameInWindow:(CGRect)arg1;
- (CGRect)expectedFrameInWindow;
- (void)setExpectedFrameInWindow:(CGRect)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)mediaItem;
- (id)imageUrl;
- (id /* block */)presentBlock;
- (void)setPresentBlock:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (BOOL)skipImageUploading;
- (void)setSkipImageUploading:(BOOL)arg1;
- (id)scanObjectResult;
- (void)setScanObjectResult:(id)arg1;
- (id)scanBarcodeResult;
- (void)setScanBarcodeResult:(id)arg1;
- (id)clickReportInfoFor33399;
- (void)setClickReportInfoFor33399:(id)arg1;
- (id)context;
- (unsigned long long)debugBeginTime;
- (void)setDebugBeginTime:(unsigned long long)arg1;
- (id)debugMessages;
- (void).cxx_destruct;
@end
