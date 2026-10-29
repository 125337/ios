@interface OMCMusicSegment : OMCClipSegment
- (id)musicInfo;
- (id)musicFilePath;
- (id)lyricStyleID;
- (id)lyricFontName;
- (id)lyricFontNameInMaterial;
- (id)lyricColorStyleID;
- (BOOL)isLyricsEnabled;
- (BOOL)showLyrics;
- (void)hideLyrics;
- (BOOL)updateLyricStyleWithID:(id)arg1;
- (BOOL)replaceMusicWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 lyricStyleID:(id)arg3 duration:(struct)arg4 isLooping:(BOOL)arg5;
- (BOOL)updateLyricFontName:(id)arg1;
- (BOOL)updateLyricColorStyleWithID:(id)arg1;
- (BOOL)isStartTimeConstraintEnabled;
- (void)setIsStartTimeConstraintEnabled:(BOOL)arg1;
- (BOOL)isEndTimeConstraintEnabled;
- (void)setIsEndTimeConstraintEnabled:(BOOL)arg1;
- (SharedPtr<XMSMusicSegment>)backingMusicSegment;
@end

