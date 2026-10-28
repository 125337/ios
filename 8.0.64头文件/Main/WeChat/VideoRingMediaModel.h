@interface VideoRingMediaModel : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
    RingTone * _originRing; // +0x10
    double _cropStartTime; // +0x18
    double _cropEndTime; // +0x20
    NSString * _friendUserName; // +0x28
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
- (void).cxx_destruct;
@end
