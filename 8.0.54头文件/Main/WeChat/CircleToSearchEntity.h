@interface CircleToSearchEntity : NSObject
{
    unsigned long long _scene; // +0x8
    unsigned long long _entrance; // +0x10
    NSString * _sessionId; // +0x18
    UIImage * _image; // +0x20
    CMessageWrap * _messageWrap; // +0x28
    WCMediaItem * _mediaItem; // +0x30
    NSString * _imageUrl; // +0x38
    NSMutableDictionary * _context; // +0x40
    unsigned long long _debugBeginTime; // +0x48
    NSMutableArray * _debugMessages; // +0x50
    CGRect _originFrameInWindow; // +0x58
    CGRect _expectedFrameInWindow; // +0x78
}
+ (unsigned long long)getSearchSceneFromScene:(unsigned long long)arg1;
+ (void)reportActionType:(unsigned long long)arg1 withScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3 andSessionId:(id)arg4 andActionValue:(id)arg5;
- (id)initWithImage:(id)arg1 andScene:(unsigned long long)arg2 andEntrance:(unsigned long long)arg3;
- (unsigned long long)dataType;
- (BOOL)alignWidthToWindow;
- (BOOL)transitionFrame;
- (unsigned long long)searchScene;
- (unsigned long long)searchParentType;
- (id)searchExtParams;
- (id)searchThirdExtParams;
- (void)report:(unsigned long long)arg1;
- (id)debugMessage;
- (void)debug:(id)arg1;
- (unsigned long long)scene;
- (unsigned long long)entrance;
- (id)sessionId;
- (id)image;
- (CGRect)originFrameInWindow;
- (void)setOriginFrameInWindow:(CGRect)arg1;
- (CGRect)expectedFrameInWindow;
- (void)setExpectedFrameInWindow:(CGRect)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)context;
- (unsigned long long)debugBeginTime;
- (void)setDebugBeginTime:(unsigned long long)arg1;
- (id)debugMessages;
- (void).cxx_destruct;
@end

