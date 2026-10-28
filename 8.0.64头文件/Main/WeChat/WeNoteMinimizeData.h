@interface WeNoteMinimizeData : NSObject <NSCoding>
{
    BOOL _bEditable; // +0x8
    unsigned int _mesLocalID; // +0xc
    unsigned int _favLocalId; // +0x10
    unsigned int _version; // +0x14
    NSString * _chatUser; // +0x18
    NSString * _timeLineId; // +0x20
    NSString * _localDataId; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)chatUser;
- (void)setChatUser:(id)arg1;
- (unsigned int)mesLocalID;
- (void)setMesLocalID:(unsigned int)arg1;
- (unsigned int)favLocalId;
- (void)setFavLocalId:(unsigned int)arg1;
- (id)timeLineId;
- (void)setTimeLineId:(id)arg1;
- (id)localDataId;
- (void)setLocalDataId:(id)arg1;
- (BOOL)bEditable;
- (void)setBEditable:(BOOL)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
