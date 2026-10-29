@interface TextState3rdPartyMusicTingTakeOverHandler : TextState3rdPartyBaseHandler
{
    MMMusicVideoStatusOpenParams * _params; // +0x8
    TextStateListenMediaView * _mediaView; // +0x10
}
+ (id)openParamsFormMusicBuffer:(id)arg1;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (BOOL)useCoverForContent;
- (id)convertSongInfoToMMMusicInfo:(id)arg1;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)supportCustomMedia;
- (id)mediaContentView;
- (id)mediaCoverView;
- (id)coverUrlString;
- (id)musicInfo;
- (id)getMusicInfo;
- (id)reportActivityId;
- (id)mediaView;
- (id)params;
- (void)setParams:(id)arg1;
- (void)setMediaView:(id)arg1;
- (void).cxx_destruct;
@end

