@interface TextState3rdPartyMusicPlayerHandler : TextState3rdPartyBaseHandler
{
    MMMusicVideoStatusOpenParams * _params; // +0x8
}
+ (id)openParamsFormMusicBuffer:(id)arg1;
- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (id)title;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (id)convertSongInfoToMMMusicInfo:(id)arg1;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (id)getMusicInfo;
- (id)reportActivityId;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
