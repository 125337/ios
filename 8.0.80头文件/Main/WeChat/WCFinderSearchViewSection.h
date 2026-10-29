@interface WCFinderSearchViewSection : NSObject
{
    long long _type; // +0x8
    FinderSearchSecurityTips * _securityTips; // +0x10
    WCFinderSearchFeedInfoSession * _infoSession; // +0x18
    WCFinderSearchFeedTabGroupSession * _feedTabGroup; // +0x20
    long long _displayCountLimit; // +0x28
}
+ (id)sectionWithSecurityTips:(id)arg1;
+ (id)sectionWithSectionInfos:(id)arg1;
+ (id)sectionWithFeedGroup:(id)arg1;
- (id)init;
- (long long)rowNumberOfSection;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)securityTips;
- (void)setSecurityTips:(id)arg1;
- (id)infoSession;
- (void)setInfoSession:(id)arg1;
- (id)feedTabGroup;
- (void)setFeedTabGroup:(id)arg1;
- (long long)displayCountLimit;
- (void)setDisplayCountLimit:(long long)arg1;
- (void).cxx_destruct;
@end
