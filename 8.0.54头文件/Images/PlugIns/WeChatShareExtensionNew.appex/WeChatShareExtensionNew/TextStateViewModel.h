@interface TextStateViewModel : NSObject
{
    NSMutableArray * _iconGroupArray; // +0x8
}
- (id)init;
- (void)loadData;
- (id)cellViewClassName;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfRowsInSection:(long long)arg1;
- (id)itemAtSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)iconGroupArray;
- (void)setIconGroupArray:(id)arg1;
- (void).cxx_destruct;
@end

