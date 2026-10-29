@interface TBIndoorBuilding : NSObject
{
    unsigned long long _defaultLevelIndex; // +0x8
    NSString * _guid; // +0x10
    NSArray * _levels; // +0x18
    NSString * _name; // +0x20
    struct _centerPoint; // +0x28
    struct _boundingMapRect; // +0x38
}
- (id)descriptionDictionary;
- (id)description;
- (unsigned long long)defaultLevelIndex;
- (void)setDefaultLevelIndex:(unsigned long long)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (id)levels;
- (void)setLevels:(id)arg1;
- (struct)centerPoint;
- (void)setCenterPoint:(struct)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (struct)boundingMapRect;
- (void)setBoundingMapRect:(struct)arg1;
- (void).cxx_destruct;
@end
