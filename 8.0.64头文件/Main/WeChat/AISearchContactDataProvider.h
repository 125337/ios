@interface AISearchContactDataProvider : NSObject
{
    CContact * _contact; // +0x8
}
- (id)initWithFoundContact:(id)arg1;
- (long long)numberOfSectionInSearchResult;
- (long long)numberOfRowInSearchResultSection:(long long)arg1;
- (double)heightForRowInSearchResultAtIndexPath:(id)arg1;
- (id)makeSearchResultCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
