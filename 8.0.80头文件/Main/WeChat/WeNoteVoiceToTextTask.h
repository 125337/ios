@interface WeNoteVoiceToTextTask : NSObject
{
    BOOL _diarizationFinished; // +0x8
    BOOL _diarizationSuccess; // +0x9
    BOOL _isCancelled; // +0xa
    unsigned int _favId; // +0xc
    unsigned int _localId; // +0x10
    int _speakerNum; // +0x14
    NSString * _attachmentId; // +0x18
    NSString * _voiceId; // +0x20
    FavoritesItemDataField * _voiceData; // +0x28
    NSString * _taskKey; // +0x30
    MMSpeakerDiarizationLogic * _diarizationLogic; // +0x38
    NSArray * _lastSegments; // +0x40
    NSArray * _lastHighlightSegments; // +0x48
    long long _endFlag; // +0x50
    unsigned long long _cdnRetryCount; // +0x58
    double _taskStartTime; // +0x60
    unsigned long long _cdnWaitElapsedMs; // +0x68
    double _pollStartTime; // +0x70
    unsigned long long _pollElapsedMs; // +0x78
}
- (id)attachmentId;
- (void)setAttachmentId:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)voiceData;
- (void)setVoiceData:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)diarizationLogic;
- (void)setDiarizationLogic:(id)arg1;
- (id)lastSegments;
- (void)setLastSegments:(id)arg1;
- (id)lastHighlightSegments;
- (void)setLastHighlightSegments:(id)arg1;
- (BOOL)diarizationFinished;
- (void)setDiarizationFinished:(BOOL)arg1;
- (BOOL)diarizationSuccess;
- (void)setDiarizationSuccess:(BOOL)arg1;
- (int)speakerNum;
- (void)setSpeakerNum:(int)arg1;
- (long long)endFlag;
- (void)setEndFlag:(long long)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (unsigned long long)cdnRetryCount;
- (void)setCdnRetryCount:(unsigned long long)arg1;
- (double)taskStartTime;
- (void)setTaskStartTime:(double)arg1;
- (unsigned long long)cdnWaitElapsedMs;
- (void)setCdnWaitElapsedMs:(unsigned long long)arg1;
- (double)pollStartTime;
- (void)setPollStartTime:(double)arg1;
- (unsigned long long)pollElapsedMs;
- (void)setPollElapsedMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
