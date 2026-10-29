@interface NSDictionary (MJKVO)
- (unsigned long long)mj_changeKind;
- (id)mj_valueBeforeChange;
- (id)mj_valueAfterChange;
- (id)mj_changedIndexes;
- (BOOL)mj_boolValueBeforeChange;
- (BOOL)mj_boolValueAfterChange;
- (float)mj_floatValueBeforeChange;
- (float)mj_floatValueAfterChange;
- (double)mj_doubleValueBeforeChange;
- (double)mj_doubleValueAfterChange;
- (unsigned long long)mj_uintValueBeforeChange;
- (unsigned long long)mj_uintValueAfterChange;
- (id)mj_insertedValues;
- (id)mj_removedValues;
- (id)mj_replacementNewValues;
- (id)mj_replacementOldValues;
@end

