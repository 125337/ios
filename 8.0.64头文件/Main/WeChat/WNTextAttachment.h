@interface WNTextAttachment : RTETextAttachment
{
    unsigned int _headIndex; // +0x8
    unsigned int _audioOffsetMs; // +0xc
}
- (void)configFrameWithWidth:(double)arg1;
- (id)favData;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)dataTitle;
- (void)setDataTitle:(id)arg1;
- (unsigned int)headIndex;
- (unsigned int)listIndex;
- (void)setListIndex:(unsigned int)arg1;
- (BOOL)checked;
- (void)setChecked:(BOOL)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (unsigned int)thumbSize;
- (void)setThumbSize:(unsigned int)arg1;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (BOOL)isSmallImage;
- (void)setIsSmallImage:(BOOL)arg1;
- (unsigned int)dataDuration;
- (void)setDataDuration:(unsigned int)arg1;
- (id)dataFmt;
- (void)setDataFmt:(id)arg1;
- (unsigned int)voiceFmt;
- (void)setVoiceFmt:(unsigned int)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)accessibilityLabel;
- (void)setHeadIndex:(unsigned int)arg1;
- (unsigned int)audioOffsetMs;
- (void)setAudioOffsetMs:(unsigned int)arg1;
@end
