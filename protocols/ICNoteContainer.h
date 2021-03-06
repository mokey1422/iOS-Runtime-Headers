/* Generated by RuntimeBrowser.
 */

@protocol ICNoteContainer <ICNoteVisibilityTesting>

@required

- (NSString *)accountName;
- (BOOL)isDeleted;
- (BOOL)noteIsVisible:(ICNote *)arg1;
- (<ICNoteVisibilityTesting> *)noteVisibilityTestingForSearchingAccount;
- (NSPredicate *)predicateForVisibleNotes;
- (BOOL)supportsEditingNotes;
- (NSString *)titleForNavigationBar;
- (NSString *)titleForTableViewCell;
- (NSArray *)visibleNotes;
- (unsigned int)visibleNotesCount;

@end
