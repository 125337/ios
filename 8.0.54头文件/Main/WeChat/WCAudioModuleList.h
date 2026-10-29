@interface WCAudioModuleList : NSObject
{
    unsigned int _type; // +0x8
    unsigned int _unitCapacity; // +0xc
    NSMutableArray * _unitArray; // +0x10
}
- (id)initWithType:(unsigned int)arg1 unitCapacity:(unsigned int)arg2;
- (void)addModule:(id)arg1 newUnit:(BOOL)arg2 notify:(BOOL)arg3;
- (void)addModules:(id)arg1 newUnit:(BOOL)arg2 notify:(BOOL)arg3;
- (void)removeModule:(id)arg1 notify:(BOOL)arg2;
- (void)removeModules:(id)arg1 notify:(BOOL)arg2;
- (void)removeModulesWithScene:(int)arg1 notify:(BOOL)arg2;
- (id)getAllModules;
- (id)getFirstUnitModules;
- (id)getLastUnitModules;
- (id)getUnitModulesAtIndex:(unsigned int)arg1;
- (unsigned int)moduleCount;
- (unsigned int)unitCount;
- (BOOL)containsModule:(id)arg1;
- (id)description;
- (void)asyncNotifyRemoveModules:(id)arg1;
- (void)asyncNotifyRemoveModule:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)unitCapacity;
- (void)setUnitCapacity:(unsigned int)arg1;
- (id)unitArray;
- (void)setUnitArray:(id)arg1;
- (void).cxx_destruct;
@end

