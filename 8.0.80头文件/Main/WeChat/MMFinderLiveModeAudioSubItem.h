@interface MMFinderLiveModeAudioSubItem : MMFinderLiveModeItem <PBCoding>
{
    int _audioSubMode; // +0x28
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_audioSubMode;
+ (void)initialize;
+ (id)getAudioSubModeItemsWithChatRoomFlag:(BOOL)arg1;
+ (id)getAudioSubModeKtvItem;
+ (id)getAudioSubModeVoiceItem:(BOOL)arg1;
- (id)getPBPropertyTable;
- (BOOL)isKtv;
- (BOOL)isChatRoom;
- (int)audioSubMode;
- (void)setAudioSubMode:(int)arg1;
@end
