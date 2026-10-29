@interface VideoRingMediaModel : NSObject
{
    BOOL _isCroped; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    RingTone * _originRing; // +0x18
    double _cropStartTime; // +0x20
    double _cropEndTime; // +0x28
    NSString * _friendUserName; // +0x30
    NSString * _friendNickName; // +0x38
}
- (id)initWithDataItem:(id)arg1 originRingBack:(id)arg2;
- (id)mediaInfo;
- (id)formatVideoPath;
- (BOOL)hasLocalVideoFile;
- (double)videoDuration;
- (id)genAudioFileTransferTaskWith:(id)arg1;
- (id)cropedTempAudioFilePath;
- (id)downloadedLocalFilePath;
- (id)getRingRawFilePath:(id)arg1;
- (id)getRingAudioFilePath;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)originRing;
- (void)setOriginRing:(id)arg1;
- (double)cropStartTime;
- (void)setCropStartTime:(double)arg1;
- (double)cropEndTime;
- (void)setCropEndTime:(double)arg1;
- (id)friendUserName;
- (void)setFriendUserName:(id)arg1;
- (id)friendNickName;
- (void)setFriendNickName:(id)arg1;
- (BOOL)isCroped;
- (void)setIsCroped:(BOOL)arg1;
- (void).cxx_destruct;
@end

