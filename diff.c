struct funcname_pattern_entry {
	int cflags;
};
static struct funcname_pattern_list {
	struct funcname_pattern_list *next;
	struct funcname_pattern_entry e;
static int parse_funcname_pattern(const char *var, const char *ep, const char *value, int cflags)
	struct funcname_pattern_list *pp;
		if (!strncmp(pp->e.name, name, namelen) && !pp->e.name[namelen])
		pp->e.name = xmemdupz(name, namelen);
	free(pp->e.pattern);
	pp->e.pattern = xstrdup(value);
	pp->e.cflags = cflags;
				return parse_funcname_pattern(var, ep, value,
					0);
			} else if (!strcmp(ep, ".xfuncname")) {
				if (!value)
					return config_error_nonbool(var);
				return parse_funcname_pattern(var, ep, value,
					REG_EXTENDED);
	quote_two_c_style(&a_name, o->a_prefix, name_a, 0);
	quote_two_c_style(&b_name, o->b_prefix, name_b, 0);
	struct xdiff_emit_state xm;
	ecb.outf = xdiff_outf;
	ecb.priv = diff_words;
	diff_words->xm.consume = fn_out_diff_words_aux;
	xdi_diff(&minus, &plus, &xpp, &xecfg, &ecb);

	struct xdiff_emit_state xm;
	struct xdiff_emit_state xm;

		 * made to the preimage.
	struct xdiff_emit_state xm;
static const struct funcname_pattern_entry *funcname_pattern(const char *ident)
	struct funcname_pattern_list *pp;
		if (!strcmp(ident, pp->e.name))
			return &pp->e;
static const struct funcname_pattern_entry builtin_funcname_pattern[] = {
	{ "java",
	  "!^[ \t]*(catch|do|for|if|instanceof|new|return|switch|throw|while)\n"
	  "^[ \t]*(([ \t]*[A-Za-z_][A-Za-z_0-9]*){2,}[ \t]*\\([^;]*)$",
	  REG_EXTENDED },
	{ "pascal",
	  "^((procedure|function|constructor|destructor|interface|"
		"implementation|initialization|finalization)[ \t]*.*)$"
	  "|"
	  "^(.*=[ \t]*(class|record).*)$",
	  REG_EXTENDED },
	{ "bibtex", "(@[a-zA-Z]{1,}[ \t]*\\{{0,1}[ \t]*[^ \t\"@',\\#}{~%]*).*$",
	  REG_EXTENDED },
	{ "tex",
	  "^(\\\\((sub)*section|chapter|part)\\*{0,1}\\{.*)$",
	  REG_EXTENDED },
	{ "ruby", "^[ \t]*((class|module|def)[ \t].*)$",
	  REG_EXTENDED },
static const struct funcname_pattern_entry *diff_funcname_pattern(struct diff_filespec *one)
	const char *ident;
	const struct funcname_pattern_entry *pe;
	pe = funcname_pattern(ident);
	if (pe)
		return pe;
			return &builtin_funcname_pattern[i];
	/* Never use a non-valid filename anywhere if at all possible */
	name_a = DIFF_FILE_VALID(one) ? name_a : name_b;
	name_b = DIFF_FILE_VALID(two) ? name_b : name_a;
	a_one = quote_two(o->a_prefix, name_a + (*name_a == '/'));
	b_two = quote_two(o->b_prefix, name_b + (*name_b == '/'));
		const struct funcname_pattern_entry *pe;
		pe = diff_funcname_pattern(one);
		if (!pe)
			pe = diff_funcname_pattern(two);
		if (pe)
			xdiff_set_find_func(&xecfg, pe->pattern, pe->cflags);
		ecb.outf = xdiff_outf;
		ecb.priv = &ecbdata;
		ecbdata.xm.consume = fn_out_consume;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
		ecb.outf = xdiff_outf;
		ecb.priv = diffstat;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	data.xm.consume = checkdiff_consume;
		ecb.outf = xdiff_outf;
		ecb.priv = &data;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
	options->a_prefix = "a/";
	options->b_prefix = "b/";
	struct xdiff_emit_state xm;
	data.xm.consume = patch_id_consume;
		ecb.outf = xdiff_outf;
		ecb.priv = &data;
		xdi_diff(&mf1, &mf2, &xpp, &xecfg, &ecb);
		diffstat.xm.consume = diffstat_consume;