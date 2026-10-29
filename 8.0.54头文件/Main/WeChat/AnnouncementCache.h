@interface AnnouncementCache : NSObject <PBCoding>
{
    BOOL _clicked; // +0x8
    unsigned int _endTimestamp; // +0xc
    Announcement * _announcement; // +0x10
}
+ (void)PBArrayAdd_announcement;
+ (void)PBArrayAdd_clicked;
+ (void)PBArrayAdd_endTimestamp;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)outOfDate;
- (id)announcement;
- (void)setAnnouncement:(id)arg1;
- (BOOL)clicked;
- (void)setClicked:(BOOL)arg1;
- (unsigned int)endTimestamp;
- (void)setEndTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

