@interface QIndoorBuilding : NSObject
{
    NSString * _guid; // +0x8
    unsigned long long _defaultLevelIndex; // +0x10
    NSArray * _levels; // +0x18
    NSString * _name; // +0x20
    struct _centerPoint; // +0x28
    struct _boundingMapRect; // +0x38
}
- (id)initWithInternalBuilding:(id)arg1;
- (id)descriptionDictionary;
- (id)description;
- (id)guid;
- (void)setGuid:(id)arg1;
- (unsigned long long)defaultLevelIndex;
- (void)setDefaultLevelIndex:(unsigned long long)arg1;
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

