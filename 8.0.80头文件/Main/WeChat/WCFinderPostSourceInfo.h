@interface WCFinderPostSourceInfo : NSObject <PBCoding>
{
    int _sourceFeedCommentScene; // +0x8
    NSString * _sourceFeedId; // +0x10
    NSString * _sourceFeedSessionBuffer; // +0x18
    unsigned long long _enterScene; // +0x20
    NSString * _sourceSongId; // +0x28
    NSString * _sourceAudioId; // +0x30
    unsigned long long _musicSourcePosition; // +0x38
    NSString * _sourceEventId; // +0x40
    NSString * _sourceTopicName; // +0x48
    NSString * _sourceTemplateId; // +0x50
    unsigned long long _sourceTemplateType; // +0x58
    NSData * _mediaMetaInfos; // +0x60
}
+ (void)PBArrayAdd_sourceFeedId;
+ (void)PBArrayAdd_sourceFeedSessionBuffer;
+ (void)PBArrayAdd_sourceSongId;
+ (void)PBArrayAdd_musicSourcePosition;
+ (void)PBArrayAdd_sourceFeedCommentScene;
+ (void)PBArrayAdd_enterScene;
+ (void)PBArrayAdd_sourceAudioId;
+ (void)PBArrayAdd_sourceEventId;
+ (void)PBArrayAdd_sourceTopicName;
+ (void)PBArrayAdd_sourceTemplateId;
+ (void)PBArrayAdd_sourceTemplateType;
+ (void)PBArrayAdd_mediaMetaInfos;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)updateSourceFeedId:(id)arg1;
- (void)updateSourceTemplateId;
- (BOOL)isEmpty;
- (id)description;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (id)sourceFeedSessionBuffer;
- (void)setSourceFeedSessionBuffer:(id)arg1;
- (int)sourceFeedCommentScene;
- (void)setSourceFeedCommentScene:(int)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
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
- (id)sourceTemplateId;
- (void)setSourceTemplateId:(id)arg1;
- (unsigned long long)sourceTemplateType;
- (void)setSourceTemplateType:(unsigned long long)arg1;
- (id)mediaMetaInfos;
- (void)setMediaMetaInfos:(id)arg1;
- (void).cxx_destruct;
@end
