@interface RingtoneFeedOpenArgs : NSObject
{
    BOOL _mutedAll; // +0x8
    RingtoneHeadItem * _head; // +0x10
}
+ (id)makeWithHead:(id)arg1 mutedAll:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)head;
- (void)setHead:(id)arg1;
- (BOOL)mutedAll;
- (void)setMutedAll:(BOOL)arg1;
- (void).cxx_destruct;
@end
