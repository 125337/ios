@interface MMMusicShareItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    unsigned int _musicDuration; // +0x8
    NSString * _mvObjectId; // +0x10
    NSString * _mvNonceId; // +0x18
    NSString * _mvCoverUrl; // +0x20
    NSString * _mvMakerFinderNickname; // +0x28
    NSString * _mvMakerFinderUsername; // +0x30
    NSString * _mvSingerName; // +0x38
    NSString * _mvAlbumName; // +0x40
    NSString * _mvMusicGenre; // +0x48
    NSString * _mvIdentification; // +0x50
    unsigned long long _mvIssueDate; // +0x58
    NSString * _mvExtInfo; // +0x60
    NSString * _mvOperationUrl; // +0x68
    NSString * _mid; // +0x70
    NSString * _appIdForSourceDisplay; // +0x78
}
+ (void)PBArrayAdd_mvObjectId;
+ (void)PBArrayAdd_mvNonceId;
+ (void)PBArrayAdd_mvCoverUrl;
+ (void)PBArrayAdd_mvMakerFinderNickname;
+ (void)PBArrayAdd_mvSingerName;
+ (void)PBArrayAdd_mvAlbumName;
+ (void)PBArrayAdd_mvMusicGenre;
+ (void)PBArrayAdd_mvIssueDate;
+ (void)PBArrayAdd_mvIdentification;
+ (void)PBArrayAdd_mvExtInfo;
+ (void)PBArrayAdd_musicDuration;
+ (void)PBArrayAdd_mvMakerFinderUsername;
+ (void)PBArrayAdd_mvOperationUrl;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_appIdForSourceDisplay;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (BOOL)isValidMvItem;
- (void)clearMvInfo;
- (id)description;
- (id)mvObjectId;
- (void)setMvObjectId:(id)arg1;
- (id)mvNonceId;
- (void)setMvNonceId:(id)arg1;
- (id)mvCoverUrl;
- (void)setMvCoverUrl:(id)arg1;
- (id)mvMakerFinderNickname;
- (void)setMvMakerFinderNickname:(id)arg1;
- (id)mvMakerFinderUsername;
- (void)setMvMakerFinderUsername:(id)arg1;
- (id)mvSingerName;
- (void)setMvSingerName:(id)arg1;
- (id)mvAlbumName;
- (void)setMvAlbumName:(id)arg1;
- (id)mvMusicGenre;
- (void)setMvMusicGenre:(id)arg1;
- (id)mvIdentification;
- (void)setMvIdentification:(id)arg1;
- (unsigned long long)mvIssueDate;
- (void)setMvIssueDate:(unsigned long long)arg1;
- (id)mvExtInfo;
- (void)setMvExtInfo:(id)arg1;
- (unsigned int)musicDuration;
- (void)setMusicDuration:(unsigned int)arg1;
- (id)mvOperationUrl;
- (void)setMvOperationUrl:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)appIdForSourceDisplay;
- (void)setAppIdForSourceDisplay:(id)arg1;
- (void).cxx_destruct;
@end

