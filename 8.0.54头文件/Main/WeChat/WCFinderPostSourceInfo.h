@interface WCFinderPostSourceInfo : NSObject <PBCoding>
{
    int _sourceFeedCommentScene; // +0x8
    NSString * _sourceFeedId; // +0x10
    NSString * _sourceFeedSessionBuffer; // +0x18
    NSString * _sourceSongId; // +0x20
    NSString * _sourceAudioId; // +0x28
    unsigned long long _musicSourcePosition; // +0x30
    NSString * _sourceEventId; // +0x38
    NSString * _sourceTopicName; // +0x40
    NSString * _sourceTemplateId; // +0x48
    unsigned long long _sourceTemplateType; // +0x50
}
+ (void)PBArrayAdd_sourceFeedId;
+ (void)PBArrayAdd_sourceFeedSessionBuffer;
+ (void)PBArrayAdd_sourceSongId;
+ (void)PBArrayAdd_musicSourcePosition;
+ (void)PBArrayAdd_sourceFeedCommentScene;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)sourceFeedSessionBuffer;
- (id)sourceTemplateId;
- (BOOL)isEmpty;
- (id)description;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (void)setSourceFeedSessionBuffer:(id)arg1;
- (int)sourceFeedCommentScene;
- (void)setSourceFeedCommentScene:(int)arg1;
- (id)sourceSongId;
- (void)setSourceSongId:(id)arg1;
- (id)sourceAudioId;
- (void)setSourceAudioId:(id)arg1;
- (unsigned long long)musicSourcePosition;
- (void)setMusicSourcePosition:(unsigned long long)arg1;
- (id)sourceEventId;
- (void)setSourceEventId:(id)arg1;
- (id)sourceTopicName;
- (void)setSourceTopicName:(id)arg1;
- (void)setSourceTemplateId:(id)arg1;
- (unsigned long long)sourceTemplateType;
- (void)setSourceTemplateType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

