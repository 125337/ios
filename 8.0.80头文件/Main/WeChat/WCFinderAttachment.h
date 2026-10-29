@interface WCFinderAttachment : NSObject <WCTColumnCoding, PBCoding>
{
    int _type; // +0x8
    WCFinderVideoAttachment * _videoAttachment; // +0x10
    FinderJumpInfoAttachment * _jumpInfoAttachment; // +0x18
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_videoAttachment;
+ (void)PBArrayAdd_jumpInfoAttachment;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithFinderAttachment:(id)arg1;
- (id)description;
- (id)genFinderAttachment;
- (id)genFinderJupmInfo;
- (int)type;
- (void)setType:(int)arg1;
- (id)videoAttachment;
- (void)setVideoAttachment:(id)arg1;
- (id)jumpInfoAttachment;
- (void)setJumpInfoAttachment:(id)arg1;
- (void).cxx_destruct;
@end
