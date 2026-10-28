@interface TextState3rdPartyListenHandler : TextState3rdPartyBaseHandler
{
    StatusFooterJumpListen * _jumpInfo; // +0x8
    TextStateListenMediaView * _mediaView; // +0x10
}
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)useCoverForContent;
- (BOOL)supportCustomMedia;
- (id)mediaContentView;
- (id)mediaCoverView;
- (id)generatePlayerConfiguration;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (void).cxx_destruct;
@end
