class Publicacion {
	Publicacion(String titulo, String autor) {
		this.titulo = titulo;
		this.autor = autor;
	}	

	public String toString() {
		return "Libro " + titulo + " de " + autor; 
	}
};

// Subclase
class Libro extends Publicacion {
	public long paginas;

	Libro(String titulo, String autor, long paginas) {
		this(titulo, autor);
		this.paginas = paginas;
	}

	public String toString() {
		return super.toString() + ", " + paginas + "paginas";
	}
};

// Subclase
class Revista extends Publicacion {
	public String periocidad;

	Revista(String titulo, String periocidad) {
		this(titulo, "Nadie");
		this.periocidad = periocidad;
	}

	public String toString() {
		String description = "[" + idPublicacion + "]" + titulo + ", revista " + periocidad;
		return description;
	}
}