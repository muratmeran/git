#include "dir.h"
	if (patch->def_name && root) {
		char *s = xmalloc(root_len + strlen(patch->def_name) + 1);
		strcpy(s, root);
		strcpy(s + root_len, patch->def_name);
		free(patch->def_name);
		patch->def_name = s;
	}
		if (sizeof(tgtfixbuf) > tgtlen)
		if (!ce)
			die("make_cache_entry failed for path '%s'", name);
			remove_path(patch->old_name);
static struct excludes {
	struct excludes *next;
	const char *path;
} *excludes;
	struct excludes *x = excludes;
	while (x) {
		if (fnmatch(x->path, pathname, 0) == 0)
			return 0;
		x = x->next;
	}
	return 1;
			struct excludes *x = xmalloc(sizeof(*x));
			x->path = arg + 10;
			x->next = excludes;
			excludes = x;