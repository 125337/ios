@interface NSIndexSet (Collection)
+ (id)indexSetFromCollectionChange:(id)arg1;
- (id)sc_unionWith:(id)arg1;
- (id)sc_intersectionWith:(id)arg1;
- (id)sc_relativeComplementIn:(id)arg1;
- (id)sc_symmetricDifferenceWith:(id)arg1;
- (BOOL)sc_intersectsWith:(id)arg1;
- (id)sc_unionWithRange:(_NSRange)arg1;
- (id)sc_intersectionWithRange:(_NSRange)arg1;
- (id)sc_relativeComplementInRange:(_NSRange)arg1;
- (id)sc_symmetricDifferenceWithRange:(_NSRange)arg1;
- (unsigned long long)minIndex;
- (unsigned long long)maxIndex;
@end
